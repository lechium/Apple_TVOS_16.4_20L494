//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSDeveloperServiceConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ed0d
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ec6f
- (void)dealloc;	// IMP=0x000000000002ec2d
- (id)init;	// IMP=0x000000000002eb70

@end

