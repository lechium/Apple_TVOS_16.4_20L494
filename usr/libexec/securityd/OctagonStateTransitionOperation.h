//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol OctagonStateString;

@interface OctagonStateTransitionOperation
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
}

+ (id)named:(id)arg1 entering:(id)arg2;	// IMP=0x00200000001aa0aa
+ (id)named:(id)arg1 intending:(id)arg2 errorState:(id)arg3 withBlockTakingSelf:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a9f3e
- (void).cxx_destruct;	// IMP=0x00200000001a9f0d
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (id)description;	// IMP=0x00100000001a9e13
- (id)initIntending:(id)arg1 errorState:(id)arg2;	// IMP=0x00100000001a9d71

@end
