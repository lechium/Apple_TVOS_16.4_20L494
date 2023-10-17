//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IDSXPCConnectionProtocol, OS_xpc_object;

@interface _IDSXPCCheckInInfo : NSObject
{
    _Bool _finishedTransaction;	// 8 = 0x8
    id <IDSXPCConnectionProtocol> _connection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_tempObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000101795
@property(nonatomic) _Bool finishedTransaction; // @synthesize finishedTransaction=_finishedTransaction;
@property(retain, nonatomic) NSObject<OS_xpc_object> *tempObject; // @synthesize tempObject=_tempObject;
@property(retain, nonatomic) id <IDSXPCConnectionProtocol> connection; // @synthesize connection=_connection;

@end

