//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverSet;

__attribute__((visibility("hidden")))
@interface _HKBridgedObserverSet : NSObject
{
    id _bridgedObserver;	// 8 = 0x8
    HKObserverSet *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000110200
@property(retain, nonatomic) HKObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id bridgedObserver; // @synthesize bridgedObserver=_bridgedObserver;

@end

