//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSJSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSJSEventTargetObject : VSJSObject
{
    NSMutableDictionary *_listeners;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008303
@property(retain, nonatomic) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
- (unsigned long long)_indexForListener:(id)arg1 withEventType:(id)arg2;	// IMP=0x00000000000080b1
- (void)dispatchEvent:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000000007e50
- (void)removeEventListener:(id)arg1:(id)arg2;	// IMP=0x0000000000007cbc
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000007ae2
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000007a85

@end
