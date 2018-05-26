# About
This directory contains the code and documentation for the fan-made Lawbreakers game.
- View the [Trello](https://trello.com/b/9YLzWwyQ) to stay up to date with development
- Visit the [Discord Channel](https://discord.gg/pVzUfu) for questions and discussion

## Contents
- Getting Started
   - Setting up a working copy
   - Making changes
- To-Do

## Getting Started
Git is the open source distributed version control system that facilitates GitHub activities on your laptop or desktop. Please follow the guides below to set up Git and begin making changes to this repository. For more info, see the [Official Documentation](https://git-scm.com/doc).

### Setting up a working copy
   1. [Install Git](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
   2. Set the user name and email for commit transactions using your favorite shell program:  
      `$ git config --global user.name "[name]"`  
      `$ git config --global user.email "[email address]"`
   3. Create a personal fork of the project on GitHub:  
      <img src="https://i.imgur.com/nBIoqI2.png"><br>
   4. Clone the fork to a local directory:  
      `$ cd .../Documents/GitHub`  
      `$ git clone https://github.com/[your username]/NewStreak.git`
   5. Create a remote *upstream* to the original repository:  
      `$ git remote add upstream https://github.com/cjmcgeary/NewStreak.git`
   6. Start making changes!

### Making changes
   1. Navigate to the working directory:  
      `$ cd NewStreak`
   2. Sync your project with the original:  
      `$ git checkout master`  
      `$ git pull upstream master && git push origin master`
   3. Create a new branch:  
      `$ git checkout -b [branch name]`
   4. Stage any changes:  
      `$ git add [file name]`
   5. Commit the changes and push the branch to your fork, the remote *origin*:  
      `$ git commit -m [descriptive message]`  
      `$ git push origin [branch name]`
   6. Create a new pull request:  
      <img src="https://i.imgur.com/lR8L0uv.png"><br>
      Note: All changes are reviewed before merging to this repository. If requested to make further changes, just push them to your branch to automatically update the PR. Please use descriptive commit and pull request summaries to explain your changes!

## To-Do
- [ ] Develop
