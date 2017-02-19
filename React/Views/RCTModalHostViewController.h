/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

@interface RCTModalHostViewController : NSViewController

@property (nonatomic, copy) void (^boundsDidChangeBlock)(CGRect newBounds);
@property (nonatomic, copy) void (^initCompletionHandler)(NSWindow *window);
@property (nonatomic, copy) void (^closeCompletionHandler)();

#if !TARGET_OS_TV
@property (nonatomic, assign) UIInterfaceOrientationMask supportedInterfaceOrientations;
#endif

@end
