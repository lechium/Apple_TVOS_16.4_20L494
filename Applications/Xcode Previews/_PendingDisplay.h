//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString, NSTimer;

@interface _PendingDisplay : NSObject
{
    NSTimer *_timeoutTimer;	// 8 = 0x8
    unsigned int _displayID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    unsigned long long _retriesRemaining;	// 32 = 0x20
    NSNumber *_token;	// 40 = 0x28
    double _scale;	// 48 = 0x30
    NSString *_maskPath;	// 56 = 0x38
    NSString *_capabilitiesPath;	// 64 = 0x40
    CDUnknownBlockType _successHandler;	// 72 = 0x48
    CDUnknownBlockType _failureHandler;	// 80 = 0x50
    NSMutableArray *_rejectedDisplayConfigurations;	// 88 = 0x58
    struct CGSize _pixelSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000004ff4
@property(readonly, nonatomic) NSMutableArray *rejectedDisplayConfigurations; // @synthesize rejectedDisplayConfigurations=_rejectedDisplayConfigurations;
@property(readonly, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(readonly, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) NSString *capabilitiesPath; // @synthesize capabilitiesPath=_capabilitiesPath;
@property(readonly, nonatomic) NSString *maskPath; // @synthesize maskPath=_maskPath;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) NSNumber *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long retriesRemaining; // @synthesize retriesRemaining=_retriesRemaining;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (_Bool)matches:(id)arg1;	// IMP=0x0010000000004f1e
- (void)cancelTimeoutTimer;	// IMP=0x0010000000004eec
- (void)startTimeoutTimerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004db9
- (id)initWithToken:(id)arg1 pixelSize:(struct CGSize)arg2 scale:(double)arg3 capabilitiesPath:(id)arg4 maskPath:(id)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000004c3d

@end

