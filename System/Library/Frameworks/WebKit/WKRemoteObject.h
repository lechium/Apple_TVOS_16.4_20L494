//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;	// 8 = 0x8
    struct RetainPtr<_WKRemoteObjectInterface> _interface;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000011fc58
- (void).cxx_destruct;	// IMP=0x000000000011fc1a
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000011fbfd
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000011fb4d
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000011faf1
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;	// IMP=0x000000000011fa69

@end

