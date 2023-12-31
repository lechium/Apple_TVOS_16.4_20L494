//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIndexMap, NSString, VOTEventUserCommandContext, VOTKeyInfo;

@interface VOTEvent : NSObject
{
    double _time;	// 8 = 0x8
    long long _origin;	// 16 = 0x10
    NSString *_command;	// 24 = 0x18
    AXIndexMap *_info;	// 32 = 0x20
    struct CGPoint _touchPoint;	// 40 = 0x28
    struct CGPoint _touchRawLocation;	// 56 = 0x38
    double _touchVelocity;	// 72 = 0x48
    unsigned long long _fingerCount;	// 80 = 0x50
    _Bool _bypassHelp;	// 88 = 0x58
    _Bool _isGuideElementMovementEvent;	// 89 = 0x59
    double _touchForce;	// 96 = 0x60
    CDUnknownBlockType _completedHandlingBlock;	// 104 = 0x68
    VOTEventUserCommandContext *_userCommandContext;	// 112 = 0x70
}

+ (id)brailleEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0040000000015598
+ (id)appleTVRemoteEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x00100000000154fa
+ (id)systemServerEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x001000000001545c
+ (id)internalEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x00100000000153be
+ (id)touchEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0010000000015320
+ (id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2;	// IMP=0x0010000000015304
+ (id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2 otherInfo:(id)arg3;	// IMP=0x0010000000015237
+ (id)externalDeviceEventWithCommand:(id)arg1 info:(id)arg2;	// IMP=0x0010000000015199
- (void).cxx_destruct;	// IMP=0x00200000000159a3
// Error: Property attributes should begin with the type ('T') attribute, property name: userCommandContext
// Property attributes: (null)

@property(nonatomic) _Bool isGuideElementMovementEvent; // @synthesize isGuideElementMovementEvent=_isGuideElementMovementEvent;
@property(copy, nonatomic) CDUnknownBlockType completedHandlingBlock; // @synthesize completedHandlingBlock=_completedHandlingBlock;
@property(nonatomic) double touchForce; // @synthesize touchForce=_touchForce;
@property(nonatomic) double touchVelocity; // @synthesize touchVelocity=_touchVelocity;
@property(nonatomic) unsigned long long fingerCount; // @synthesize fingerCount=_fingerCount;
@property(nonatomic) struct CGPoint touchRawLocation; // @synthesize touchRawLocation=_touchRawLocation;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) long long tvTouchPadRegion;
- (id)description;	// IMP=0x00100000000157af
@property(nonatomic) _Bool bypassHelp; // @dynamic bypassHelp;
- (id)objectForIndex:(unsigned long long)arg1;	// IMP=0x0010000000015787
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x001000000001570e
- (void)setInfo:(id)arg1;	// IMP=0x00100000000156c3
@property(retain, nonatomic) VOTKeyInfo *keyInfo; // @dynamic keyInfo;
- (_Bool)isAppleTVRemoteEvent;	// IMP=0x0010000000015687
- (_Bool)isSystemServerEvent;	// IMP=0x0010000000015679
- (_Bool)isBrailleEvent;	// IMP=0x001000000001566b
- (_Bool)isExternalDeviceEvent;	// IMP=0x001000000001565d
- (_Bool)isTouchEvent;	// IMP=0x001000000001564f
- (_Bool)isKeyEvent;	// IMP=0x0010000000015641
- (double)time;	// IMP=0x0010000000015636
- (id)initWithType:(long long)arg1;	// IMP=0x0010000000015148

@end

