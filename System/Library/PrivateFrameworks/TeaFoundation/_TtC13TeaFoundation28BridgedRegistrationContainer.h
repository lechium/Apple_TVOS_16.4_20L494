//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13TeaFoundation28BridgedRegistrationContainer : NSObject
{
    MISSING_TYPE *registrationContainer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b83e0
- (id)init;	// IMP=0x00000000000b8380
- (id)registerUncheckedProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b8240
- (id)registerUncheckedProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b8060
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b7f40
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7f10
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b7e50
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7b70

@end

