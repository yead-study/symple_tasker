//
// Created by yead on 9/15/23.
//

#include "../../../../headers/PathManager.h"

namespace core {
    PathManager::PathManager()
    {
        home = getenv("HOME");
        std::string Sym = "/.sym";
        symfolder = home + Sym;
        taskfile = symfolder + "/tasks";
        tagfile = symfolder + "/tags";
    }
    string PathManager::gethome()
    {
        return home;
    }
    string PathManager::getsymfolder()
    {
        return symfolder;
    }
    string PathManager::gettaskfile()
    {
        return taskfile;
    }
    string PathManager::gettagfile()
    {
        return tagfile;
    }
} // core