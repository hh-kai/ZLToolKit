﻿/*
 * Copyright (c) 2016 The ZLToolKit project authors. All Rights Reserved.
 *
 * This file is part of ZLToolKit(https://github.com/xia-chu/ZLToolKit).
 *
 * Use of this source code is governed by MIT license that can be found in the
 * LICENSE file in the root of the source tree. All contributing project authors
 * may be found in the AUTHORS file in the root of the source tree.
 */

#include "TcpSession.h"

namespace toolkit {

StatisticImp(TcpSession);

TcpSession::TcpSession( const Socket::Ptr &sock) : Session(sock) {
}

TcpSession::~TcpSession() {
}

} /* namespace toolkit */

