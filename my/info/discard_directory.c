how to discard cloned directory /workspaces/db_tutorial/Poker

git clean -fd /workspaces/db_tutorial/Poker

/workspaces/db_tutorial/Poker: path to the directory you want to discard
// /workspaces/db_tutorial/Poker: this is the directory you want to discard
// -f: force the clean operation
// -d: remove untracked directories in addition to untracked files
//
// Example command to discard the cloned directory:
// git clean -fd /workspaces/db_tutorial/Poker