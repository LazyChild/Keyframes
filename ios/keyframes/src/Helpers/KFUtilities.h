/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant 
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef KFBASE_DEFINES_H
#define KFBASE_DEFINES_H

#ifdef __cplusplus
# define KF_EXTERN_C_BEGIN extern "C" {
# define KF_EXTERN_C_END   }
#else
# define KF_EXTERN_C_BEGIN
# define KF_EXTERN_C_END
#endif

#endif

#include <Foundation/Foundation.h>

typedef id (^KFMapArrayHandler)(id object);
typedef id (^KFMapArrayWithIndexHandler)(id object, NSUInteger index);

KF_EXTERN_C_BEGIN

NSArray *KFMapArray(NSArray *arrayToMap, KFMapArrayHandler mapBlock);
NSArray *KFMapArrayWithIndex(NSArray *arrayToMap, KFMapArrayWithIndexHandler mapBlock);

UIColor *KFColorWithHexString(NSString *hexString);

BOOL KFVersionLessThan(NSString *versionA, NSString *versionB);

KF_EXTERN_C_END

@interface NSMutableArray<ObjectType> (KFFoundation)

- (void)removeFirstObject;

@end
