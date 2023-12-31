//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSSIMDeactivationInfoMessage : FTIDSMessage
{
    long long _deviceTime;	// 232 = 0xe8
    NSString *_homePlmn;	// 240 = 0xf0
    NSArray *_events;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0020000000010390
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSString *homePlmn; // @synthesize homePlmn=_homePlmn;
@property long long deviceTime; // @synthesize deviceTime=_deviceTime;
- (id)messageBody;	// IMP=0x001000000000f810
- (id)requiredKeys;	// IMP=0x001000000000f790
- (id)bagKey;	// IMP=0x001000000000f770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000f660

@end

