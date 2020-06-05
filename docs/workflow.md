## Workflow

When you want to modify the contents of a repository, the first step is to make sure you have the latest code from the master branch.

To make sure your local master branch is up to date with the remote master branch, run
```
git checkout master
git pull
```

Then create a new branch where you can make changes independent of what others are working on. Think of a branch as a copy of the repository which tracks your changes from the time you created it.

To create a new branch and to start using it, run
```
git checkout -b feature/myCoolFeature
```

Then go ahead and make whatever changes you like on to the repository.

Once you are done, commit your changes.

```
# you will have to stage your change before this
git commit -m 'I added this new feature'
```

Alternative, you can also commit through the gui.

Note that git will commit your changes only to your local branch. So far, these changes will not be visible to others collaborating with you on the repository, since your branch is available locally on your machine.

Therefor to upload or 'push' these changes to github, run

```
git push origin feature/myCoolFeature
```

Then your branch including all the changes will be available on server for others to checkout and use.
