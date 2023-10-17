//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OctagonStateTransitionPathStep;
@protocol OctagonStateString;

@interface OctagonStateTransitionPath : NSObject
{
    NSString<OctagonStateString> *_initialState;	// 8 = 0x8
    OctagonStateTransitionPathStep *_pathStep;	// 16 = 0x10
}

+ (id)pathFromDictionary:(id)arg1;	// IMP=0x00400000000cafcb
- (void).cxx_destruct;	// IMP=0x00200000000cafa3
@property(retain) OctagonStateTransitionPathStep *pathStep; // @synthesize pathStep=_pathStep;
@property(retain) NSString<OctagonStateString> *initialState; // @synthesize initialState=_initialState;
- (id)asPathStep;	// IMP=0x00100000000cae6a
- (id)initWithState:(id)arg1 pathStep:(id)arg2;	// IMP=0x00100000000cadd1

@end

