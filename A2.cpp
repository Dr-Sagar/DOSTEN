// how we implement this on Rust..

// instead of a base class, we define a "trait"
// traits define a functionality a type must provide. they're rougly like interfaces
// unlike classes, traits don't contain any data
trait Animal
{
    fn make_sound(&self);
}

// structs contain only the declared fields, no inheritance
// (derive can automagically implement some special traits)
#[derive(Clone)]
struct Dog
{
    name: String,
}

// methods are not part of the struct, they can be appended at any time
impl Dog
{
    // rust types have only one constructor, the default one (used below)
    // but it's common to create a "new" function for that purpose
    fn new(name: &str) -> Self
    {
        // to_owned copies the borrowed string (&str) into a owned String
        Dog{ name: name.to_owned() }
    }

    fn wag(&self)
    {
        println!("*{} wags*", self.name);
    }
}

// now, we say that "Dog is an Animal" by implementing the corresponding trait
// there is no hierarchy, and a type can implement multiple traits
impl Animal for Dog
{
    fn make_sound(&self)
    {
        println!("{} the dog said: bork!", self.name);
    }
}

// now the same, but with Cat
#[derive(Clone)]
struct Cat
{
    name: String,
}

impl Cat
{
    fn new(name: &str) -> Self
    {
        Cat{ name: name.to_owned() }
    }

    fn purr(&self)
    {
        println!("*{} purrs*", self.name);
    }
}

impl Animal for Cat
{
    fn make_sound(&self)
    {
        println!("{} the cat said: mow!", self.name);
    }
}

// we can use Animal as a "trait object", that means dynamic dispatch
// there is only 1 copy of this function
// but this isn't the best method..
fn animal_sound(a: &Animal)
{
    a.make_sound();
    // however type information is erased ..
}

// static dispatch is done via generics. it's similar to templates but it requires
// a "trait bound", that means only Animal methods are accessible from here.
// the compiler creates two copies of this function, one for each type
// (with `T: Animal + ?Sized` it allows both static and dynamic dispatch from the same function)
fn animal_sound_1<T: Animal>(a: &T)
{
    a.make_sound();
    // no type information here too ..
}

// .. to preserve type information, we use a enum (sum type, also called ADT)
enum AnyAnimal
{
    Dog(Dog),
    Cat(Cat),
}

// since it's the sum of two animals, it should be an Animal too
impl Animal for AnyAnimal
{
    fn make_sound(&self)
    {
        // to use an enum, we extract it's data via a "match" statement
        match *self
        {
            AnyAnimal::Dog(ref d) => d.make_sound(),
            AnyAnimal::Cat(ref c) => c.make_sound(),
        }
    }
}

// now we got an heterogeneous type with full type information
fn animal_sound_2(a: AnyAnimal)
{
    a.make_sound();
    match a
    {
        AnyAnimal::Dog(d) => d.wag(),
        AnyAnimal::Cat(c) => c.purr(),
    }
}

// we can make things more transparent to the user by implementing the From trait
impl From<Dog> for AnyAnimal
{
    fn from(dog: Dog) -> Self
    {
        AnyAnimal::Dog(dog)
    }
}

impl From<Cat> for AnyAnimal
{
    fn from(cat: Cat) -> Self
    {
        AnyAnimal::Cat(cat)
    }
}

// "Into" is the counterpart of From
fn animal_sound_3<T: Into<AnyAnimal>>(anim: T)
{
    let a = anim.into();  // run the conversion and extract the AnyAnimal
    a.make_sound();
    match a
    {
        AnyAnimal::Dog(d) => d.wag(),
        AnyAnimal::Cat(c) => c.purr(),
    }
}

fn main()
{
    let cat = Cat::new("kitty");
    let dog = Dog::new("puppy");
    animal_sound(&cat);
    animal_sound(&dog);
    animal_sound_1(&cat);
    animal_sound_1(&dog);
    // using the enum directly is verbose
    animal_sound_2(AnyAnimal::Cat(cat.clone()));
    animal_sound_2(AnyAnimal::Dog(dog.clone()));
    // using Into arguments makes it prettier
    animal_sound_3(cat);
    animal_sound_3(dog);
}