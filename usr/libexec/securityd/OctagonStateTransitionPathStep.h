//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface OctagonStateTransitionPathStep : NSObject
{
    _Bool _successState;	// 8 = 0x8
    NSDictionary *_followStates;	// 16 = 0x10
}

+ (id)pathFromDictionary:(id)arg1;	// IMP=0x00400000000caaf5
+ (id)success;	// IMP=0x00100000000caacc
- (void).cxx_destruct;	// IMP=0x00200000000caabc
@property(readonly) NSDictionary *followStates; // @synthesize followStates=_followStates;
@property _Bool successState; // @synthesize successState=_successState;
- (id)description;	// IMP=0x00100000000caa07
- (id)nextStep:(id)arg1;	// IMP=0x00100000000ca984
- (id)initWithPath:(id)arg1;	// IMP=0x00100000000ca915
- (id)initAsSuccess;	// IMP=0x00100000000ca8c0

@end

