//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResultsCaptions : NSObject
{
    _Bool _remoteCanDisplayCaptions;	// 8 = 0x8
    NSSet *_localLanguages;	// 16 = 0x10
    NSSet *_remoteLanguages;	// 24 = 0x18
}

@property(nonatomic) _Bool remoteCanDisplayCaptions; // @synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions;
@property(retain, nonatomic) NSSet *remoteLanguages; // @synthesize remoteLanguages=_remoteLanguages;
@property(retain, nonatomic) NSSet *localLanguages; // @synthesize localLanguages=_localLanguages;
- (void)dealloc;	// IMP=0x00000000002dea4c

@end

