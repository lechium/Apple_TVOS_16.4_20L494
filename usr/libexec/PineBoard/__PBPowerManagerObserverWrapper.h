//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PBPowerManagerObserver;

@interface __PBPowerManagerObserverWrapper : NSObject
{
    id <PBPowerManagerObserver> _observer;	// 8 = 0x8
}

+ (id)wrapperWithObserver:(id)arg1;	// IMP=0x0040000000004b50
- (void).cxx_destruct;	// IMP=0x0020000000004bc9
@property(nonatomic) __weak id <PBPowerManagerObserver> observer; // @synthesize observer=_observer;

@end

