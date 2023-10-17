//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

@interface RMAudioListenerPoseProviderConfiguration : NSObject
{
    _Bool _forceSessionRestart;	// 8 = 0x8
    NSDictionary *_tempestOptions;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002af8
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool forceSessionRestart; // @synthesize forceSessionRestart=_forceSessionRestart;
@property(retain, nonatomic) NSDictionary *tempestOptions; // @synthesize tempestOptions=_tempestOptions;
- (id)initWithUniqueIdentifier:(id)arg1 tempestOptions:(id)arg2 forceSessionRestart:(_Bool)arg3;	// IMP=0x00100000000029fa

@end

