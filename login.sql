-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 06, 2022 at 10:02 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `login`
--

-- --------------------------------------------------------

--
-- Table structure for table `indexer`
--

CREATE TABLE `indexer` (
  `sid` int(11) NOT NULL,
  `namer` text NOT NULL,
  `skiller` text NOT NULL,
  `cityer` text NOT NULL,
  `dt` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `indexer`
--

INSERT INTO `indexer` (`sid`, `namer`, `skiller`, `cityer`, `dt`) VALUES
(26, '', '', '', '2022-07-05 08:13:31'),
(28, '', '', '', '2022-07-05 08:17:57'),
(29, 'Ritesh', 'cpp', 'agartala', '2022-07-05 08:18:08'),
(30, '', '', '', '2022-07-05 18:58:43'),
(31, 'subhranil', 'Python programming', 'SOUTH TRIPURA', '2022-07-05 18:58:51'),
(32, '', '', '', '2022-07-05 23:41:15'),
(33, 'srijit', 'JAVA', 'Indranagar', '2022-07-05 23:41:27'),
(34, '', '', '', '2022-07-06 00:02:52'),
(35, 'arjit', 'JavaScript', 'SOUTH TRIPURA', '2022-07-06 00:03:07'),
(36, '', '', '', '2022-07-06 21:50:28'),
(37, 'ceetah', 'Tailwind Css', 'Dharmanagar', '2022-07-06 21:50:49'),
(38, '', '', '', '2022-07-06 21:54:36'),
(39, 'Tiger', 'Flutter Development', 'Silchar', '2022-07-06 21:55:23');

-- --------------------------------------------------------

--
-- Stand-in structure for view `mr`
-- (See below for the actual view)
--
CREATE TABLE `mr` (
`ut` varchar(255)
,`dt` datetime
);

-- --------------------------------------------------------

--
-- Table structure for table `red`
--

CREATE TABLE `red` (
  `sid` int(11) NOT NULL,
  `nake` text NOT NULL,
  `cef` text NOT NULL,
  `comment` text NOT NULL,
  `dt` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `red`
--

INSERT INTO `red` (`sid`, `nake`, `cef`, `comment`, `dt`) VALUES
(5, 'skullcandy', '', 'i am still alive', '2022-07-03 05:35:17'),
(14, 'skullcandy', '', 'red in plus', '2022-07-03 07:18:27'),
(18, 'skullcandy', '', 'every thing uis a red habit', '2022-07-03 07:19:14'),
(23, 'skullcandy', '', 'https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ffreepngimg.com%2Fthumb%2Fpokemon%2F20250-9-pokeball-photo.png&f=1&nofb=1', '2022-07-03 07:25:38'),
(49, 'Ritesh', '', 'This is a comment for \'korte * * sunam\'', '2022-07-03 13:30:27'),
(64, 'music', '', 'comment from music', '2022-07-03 15:49:32'),
(103, 'skullcandy', '', 'comment from music', '2022-07-05 03:52:02'),
(105, 'skullcandy', '', 'dhur matha muta', '2022-07-05 03:54:15'),
(106, 'skullcandy', '', 'i am still alive', '2022-07-05 03:55:47'),
(107, 'skullcandy', '', 'i am still alive', '2022-07-05 03:56:20'),
(108, 'skullcandy', '', 'rishwamukh', '2022-07-05 03:56:28'),
(109, 'skullcandy', '', 'rishwamukh', '2022-07-05 03:57:51'),
(110, 'skullcandy', 'Ritesh', 'amar matha', '2022-07-05 03:57:56'),
(114, 'skullcandy', 'skullcandy', 'cedefce', '2022-07-05 04:05:54'),
(115, 'skullcandy', 'skullcandy', 'cedefce', '2022-07-05 04:11:12'),
(122, 'skullcandy', 'korte hobe rajar sunam', 'Rajar rajje sobai golam', '2022-07-05 05:11:28'),
(123, 'skullcandy', 'korte hobe rajar sunam', 'Rajar rajje sobai golam', '2022-07-05 05:11:45'),
(124, 'skullcandy', 'korte hobe rajar sunam', 'comment from music', '2022-07-05 05:11:49'),
(125, 'skullcandy', 'korte hobe rajar sunam', 'comment from music', '2022-07-05 05:21:16'),
(149, 'skullcandy', 'korte hobe rajar sunam', 'vbn', '2022-07-05 06:24:00'),
(154, '', '', '', '2022-07-05 06:32:53'),
(155, '', '', '', '2022-07-05 08:49:37'),
(156, '', '', '', '2022-07-05 18:54:33'),
(157, '', '', '', '2022-07-05 18:55:37'),
(158, '', '', '', '2022-07-05 18:56:19'),
(159, '', '', '', '2022-07-05 18:58:31'),
(160, '', '', '', '2022-07-05 18:58:36'),
(161, '', '', '', '2022-07-05 23:37:01'),
(162, '', '', '', '2022-07-05 23:37:52'),
(163, '', '', '', '2022-07-05 23:38:29'),
(164, 'srijit', 'This is my post to shoe this is a posting area', 'jeff Bezos Amazon Use kore na', '2022-07-05 23:40:22'),
(165, '', '', '', '2022-07-05 23:40:28'),
(166, '', '', '', '2022-07-06 00:02:31'),
(167, '', '', '', '2022-07-06 00:03:20'),
(168, '', '', '', '2022-07-06 21:49:10'),
(169, '', '', '', '2022-07-06 21:50:12'),
(170, '', '', '', '2022-07-06 21:53:33'),
(171, '', '', '', '2022-07-06 22:06:34'),
(172, '', '', '', '2022-07-06 22:06:41'),
(173, '', '', '', '2022-07-06 22:07:52'),
(174, '', '', '', '2022-07-06 23:02:51'),
(175, '', '', '', '2022-07-06 23:02:57'),
(176, 'Tiger', 'Tiger', 'https://zerodha.com/open-account?c=PEW116', '2022-07-06 23:03:00'),
(177, '', '', '', '2022-07-06 23:57:20');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(11) NOT NULL,
  `username` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `skills` text NOT NULL,
  `city` text NOT NULL,
  `created_at` datetime NOT NULL DEFAULT current_timestamp(),
  `dt` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `username`, `password`, `skills`, `city`, `created_at`, `dt`) VALUES
(1, 'skullcandy', '$2y$10$pc6r5eFRckrSF4b1GQo/n.UYhFghdshS.JuC1Z3oFUVIMPC.UCrfC', '', '', '2022-06-19 17:22:43', '2022-06-29 03:25:40'),
(2, 'Ritesh', '$2y$10$0gI8C7SUcQWWh.dZfQYP9Ol2XnuawtZRX2QK7IXZNBrZkEFSdlqgW', '', '', '2022-06-26 14:26:56', '2022-06-29 03:25:40'),
(3, 'mango', '$2y$10$6XB8Mkdhi3htShzdnYlmIeSIwmjANj/1dA5N4cvrAS9JHiL7BHKYa', '', '', '2022-06-29 03:08:51', '2022-06-29 03:25:40'),
(4, 'prime', '$2y$10$Yn/YiaBEO4U96gdmJQc01ef2Jqw.ggMlhR6YtEXOW1Gyx.aJlPdee', '', '', '2022-06-29 03:21:00', '2022-06-29 03:25:40'),
(6, 'raja', '$2y$10$pAVhEAZ37Vma1M3zLlOVR.2I0wmVfwXvvzT0uMskeghtQRJ1DygCu', '', '', '2022-06-29 03:26:33', '2022-06-29 03:26:33'),
(70, 'subhranil', '$2y$10$xhDhIZ58jyotlHt4DXClP.e4HKZWDoO46T5.IdXYHRrurA9fXyMTi', '', '', '2022-06-29 15:25:36', '2022-06-29 15:25:36'),
(71, '', '', 'subhranil', 'subhranil', '2022-06-29 15:25:36', '2022-06-29 15:25:36'),
(73, 'fish', 'crocodile', 'python', 'america', '2022-07-03 03:08:43', '2022-07-03 03:08:43'),
(74, 'crocodile', 'password', 'java', 'london', '2022-07-03 03:09:33', '2022-07-03 03:09:33'),
(82, 'login', '$2y$10$o8Bu1VbBoWyuCMZFBY54D.yuVjtmrAP5f9d7bwY94zPvsL0TdLMry', '', '', '2022-07-03 03:43:48', '2022-07-03 03:43:48'),
(83, '', '', 'login', 'login', '2022-07-03 03:43:48', '2022-07-03 03:43:48'),
(94, 'meedha', '$2y$10$6LDfC8R8gXaxSjkEjg8/wOkGf5tnOmzfQOF2Ub.YyHkPT4OXCFzrq', '', '', '2022-07-03 04:03:04', '2022-07-03 04:03:04'),
(95, '', '', 'meedha', 'meedha', '2022-07-03 04:03:04', '2022-07-03 04:03:04'),
(110, 'NASA', '$2y$10$LISFCN5kxoYzjFLvyJV/QeEIdHWG6k6e0Tv2Hp/r3OyWBjkbCbcnO', '', '', '2022-07-03 15:47:27', '2022-07-03 15:47:27'),
(111, '', '', 'python', 'SOUTH TRIPURA', '2022-07-03 15:47:27', '2022-07-03 15:47:27'),
(112, 'sound', '$2y$10$MsGXSqiNgoVlhxfNw6Io2.X5EUfh9eblto3qJ/yqOfy0G6QK9Tqoq', '', '', '2022-07-03 15:48:25', '2022-07-03 15:48:25'),
(113, '', '', 'p', '', '2022-07-03 15:48:25', '2022-07-03 15:48:25'),
(114, 'music', '$2y$10$91a8cXCOd1T957P09cD3dOTmhW0fXiYpdK0ixpg3lBMch773beASS', '', '', '2022-07-03 15:48:42', '2022-07-03 15:48:42'),
(115, '', '', 'music', 'SOUTH TRIPURA', '2022-07-03 15:48:42', '2022-07-03 15:48:42'),
(116, 'srijit', '$2y$10$MD/3ST273X5PtrYSEgFMRea2ytB4XEFoixk9JBFrOqkkPCrqaQ4c.', '', '', '2022-07-05 23:37:47', '2022-07-05 23:37:47'),
(117, '', '', 'JavaScript', 'SOUTH TRIPURA', '2022-07-05 23:37:47', '2022-07-05 23:37:47'),
(118, 'arjit', '$2y$10$2XXfH8Fl4RZR/Iuy7boLtehpYVQEXSjQ1qNngCTAu63ZZMSTI9L3y', '', '', '2022-07-06 00:02:25', '2022-07-06 00:02:25'),
(119, '', '', 'JavaScript', 'KrisnnaNagar', '2022-07-06 00:02:25', '2022-07-06 00:02:25'),
(120, 'ceetah', '$2y$10$pFr5efgzlU0SSh0.VDGRq.jsXrjH2Ak4S.uHtSOTr5JAc3Ak0GFA.', '', '', '2022-07-06 21:50:02', '2022-07-06 21:50:02'),
(121, '', '', 'tailwind css', 'Dharmanagar', '2022-07-06 21:50:02', '2022-07-06 21:50:02'),
(122, 'Tiger', '$2y$10$qXkDK9DB7nGtUcINu/qOAuR5kOh/uzQDha37zGfwELpRomUAOJ4VS', '', '', '2022-07-06 21:53:23', '2022-07-06 21:53:23'),
(123, '', '', 'Node.Js', 'Melaghar', '2022-07-06 21:53:23', '2022-07-06 21:53:23');

-- --------------------------------------------------------

--
-- Table structure for table `yellow`
--

CREATE TABLE `yellow` (
  `sid` int(11) NOT NULL,
  `usert` text DEFAULT NULL,
  `lang` text NOT NULL,
  `other` text DEFAULT NULL,
  `dt` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `yellow`
--

INSERT INTO `yellow` (`sid`, `usert`, `lang`, `other`, `dt`) VALUES
(28, 'Ritesh', '', 'korte hobe rajar sunam', '2022-06-29 02:57:26'),
(32, 'prime', '', 'This is my post to shoe this is a posting area', '2022-06-29 03:22:59'),
(38, 'vibek', '', 'akash is a ice cream boy\r\n', '2022-06-29 15:04:19'),
(43, 'subhranil', '', 'tehrseraw', '2022-06-29 15:27:15'),
(48, 'skullcandy', '', 'i am interested', '2022-07-03 02:33:35'),
(50, 'skullcandy', '', 'Rajar rajje sobai golam', '2022-07-03 02:45:08'),
(52, 'skullcandy', '', 'janam janam janam', '2022-07-03 03:22:46'),
(56, 'skullcandy', '', 'LTTE', '2022-07-03 05:34:15'),
(57, 'skullcandy', '', 'Every one is a player', '2022-07-03 05:34:25'),
(58, 'skullcandy', '', 'This is post', '2022-07-03 05:34:39'),
(60, 'Ritesh', '', 'All that in about in cross', '2022-07-03 07:10:29'),
(64, 'skullcandy', '', 'Edar pore r kicchu nai;', '2022-07-03 12:57:11'),
(66, 'Ritesh', '', 'This is the post from SriLanka', '2022-07-03 13:24:52'),
(68, 'Ritesh', '', 'Log out is not possible in this website, be understandable\r\n', '2022-07-03 13:29:27'),
(70, 'music', '', 'Music is my passion', '2022-07-03 15:48:58'),
(91, 'skullcandy', 'random', 'another post', '2022-07-05 05:39:34'),
(94, 'skullcandy', 'cpp', 'this is my current user', '2022-07-05 06:25:43'),
(96, 'Ritesh', 'php', 'how to connect database with php?', '2022-07-05 06:26:53'),
(97, '', '', '', '2022-07-05 06:40:59'),
(98, '', '', '', '2022-07-05 07:55:58'),
(99, '', '', '', '2022-07-05 18:57:51'),
(100, '', '', '', '2022-07-05 23:37:55'),
(101, 'srijit', 'random', 'Aske Amar Mon Bhalo Nei', '2022-07-05 23:38:28'),
(102, '', '', '', '2022-07-06 22:06:54'),
(103, 'Tiger', 'php', 'I just wnt to learn about php, please help me out.', '2022-07-06 22:07:27');

-- --------------------------------------------------------

--
-- Structure for view `mr`
--
DROP TABLE IF EXISTS `mr`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `mr`  AS SELECT `users`.`username` AS `ut`, `users`.`dt` AS `dt` FROM `users``users`  ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `indexer`
--
ALTER TABLE `indexer`
  ADD PRIMARY KEY (`sid`);

--
-- Indexes for table `red`
--
ALTER TABLE `red`
  ADD PRIMARY KEY (`sid`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `yellow`
--
ALTER TABLE `yellow`
  ADD PRIMARY KEY (`sid`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `indexer`
--
ALTER TABLE `indexer`
  MODIFY `sid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=40;

--
-- AUTO_INCREMENT for table `red`
--
ALTER TABLE `red`
  MODIFY `sid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=178;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=124;

--
-- AUTO_INCREMENT for table `yellow`
--
ALTER TABLE `yellow`
  MODIFY `sid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=104;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
