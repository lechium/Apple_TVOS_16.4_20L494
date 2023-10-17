//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCCoding <NSObject>
- (void)encodeWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;

@optional
- (Class)fallbackXPCEncodableClass;
@end

