/// Copyright 2019 Google Inc. All rights reserved.
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///    http://www.apache.org/licenses/LICENSE-2.0
///
///    Unless required by applicable law or agreed to in writing, software
///    distributed under the License is distributed on an "AS IS" BASIS,
///    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
///    See the License for the specific language governing permissions and
///    limitations under the License.

#import <Foundation/Foundation.h>

#include "Source/common/SNTKernelCommon.h"
#include "Source/santad/EventProviders/SNTEventProvider.h"

#include <EndpointSecurity/EndpointSecurity.h>

// Gleaned from https://opensource.apple.com/source/xnu/xnu-4903.241.1/bsd/sys/proc_internal.h
const pid_t PID_MAX = 99999;

@interface SNTEndpointSecurityManager : NSObject<SNTEventProvider>
- (santa_vnode_id_t)vnodeIDForFile:(es_file_t *)file;

@property(readonly, nonatomic) es_client_t *client;

@end
