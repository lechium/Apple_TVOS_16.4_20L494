//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHServerResponseContext : NSObject
{
    double _defaultRecordingIntermissionInSeconds;	// 8 = 0x8
    NSString *_campaignToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005e31
@property(copy, nonatomic) NSString *campaignToken; // @synthesize campaignToken=_campaignToken;
@property(nonatomic) double defaultRecordingIntermissionInSeconds; // @synthesize defaultRecordingIntermissionInSeconds=_defaultRecordingIntermissionInSeconds;
- (void)sh_setCampaignTokenForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005c58
- (void)sh_setDefaultValuesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005aea

@end

