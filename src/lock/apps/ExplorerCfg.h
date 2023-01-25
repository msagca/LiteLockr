/*
 * Copyright (C) 2020, 2022 Max Kolesnikov <maxklvd@gmail.com>
 *
 * This file is part of LiteLockr.
 *
 * LiteLockr is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LiteLockr is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LiteLockr.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EXPLORER_CFG_H
#define EXPLORER_CFG_H

#include <string>
#include <vector>

#include "lock/config/AppCfg.h"

namespace litelockr {

class ExplorerCfg: public AppCfg {
public:
    std::wstring executable() const override { return ExplorerExe; }

    bool shouldSkipApp() const override { return true; }

    static bool isExplorer(HWND hWnd);
    static std::vector<std::wstring> allowedWindowClasses();

    constexpr static auto ExplorerExe = L"EXPLORER.EXE";
};

} // namespace litelockr

#endif // EXPLORER_CFG_H
