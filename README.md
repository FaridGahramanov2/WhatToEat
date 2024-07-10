# WhatToEat

Introduction
This report details a C programming project that develops a food voting system for a group. The system allows participants to vote for their preferred food items from a predefined list, and it determines the most popular choices based on the votes collected.

Implementation Details
The program utilizes a structure named food that contains two fields: votes (an integer to store vote counts) and name (a string to store the food item's name). It maintains an array of food structures initialized with five food items.

Program Flow
Input Collection: The program first prompts the user to enter the total number of voters.
Voting Process: It displays a menu of food items and collects votes from each participant, ensuring that votes fall within the valid range.
Vote Validation: If a vote is outside the valid range, it prompts an error message.
Results Display: After all votes are collected, it displays the total votes for each food item. Foods that receive votes below a threshold are discarded in the first round.
Second Round Voting: If any foods pass the threshold, a second round of voting is conducted among the qualified items.
Final Selection: The program concludes by displaying the food item with the highest votes after the second round.
Challenges Addressed
Ensuring that user input is within the valid range.
Managing two rounds of voting to determine the most popular food item.
Conclusion
The implemented food voting system effectively collects user preferences and identifies the most popular food item based on votes. It handles user input errors gracefully and ensures a democratic selection process for group food decisions.

This simplified and technical overview provides insight into the system's function and underlying structure, relevant for documentation or further development.






