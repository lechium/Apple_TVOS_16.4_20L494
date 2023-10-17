//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest, NSString;

@interface _ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequestMutation : NSObject
{
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest *_base;	// 8 = 0x8
    double _expirationDuration;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasExpirationDuration:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001ac31c
- (void)setExpirationDuration:(double)arg1;	// IMP=0x00100000001ac30d
- (double)getExpirationDuration;	// IMP=0x00100000001ac2ea
- (_Bool)isDirty;	// IMP=0x00100000001ac2df
- (id)initWithBase:(id)arg1;	// IMP=0x00100000001ac274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

