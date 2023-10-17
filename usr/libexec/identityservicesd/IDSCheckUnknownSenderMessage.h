//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSNumber, NSString;

@interface IDSCheckUnknownSenderMessage : FTIDSMessage
{
    NSString *_hardwareVersion;	// 232 = 0xe8
    NSString *_OSVersion;	// 240 = 0xf0
    NSString *_softwareVersion;	// 248 = 0xf8
    NSString *_sender;	// 256 = 0x100
    NSNumber *_attemptCount;	// 264 = 0x108
    NSString *_geo;	// 272 = 0x110
    long long _status;	// 280 = 0x118
    _Bool _abusive;	// 288 = 0x120
    double _delay;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00200000002e3c70
@property double delay; // @synthesize delay=_delay;
@property _Bool abusive; // @synthesize abusive=_abusive;
@property long long status; // @synthesize status=_status;
@property(copy) NSString *geo; // @synthesize geo=_geo;
@property(copy) NSNumber *attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy) NSString *sender; // @synthesize sender=_sender;
@property(copy) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *OSVersion; // @synthesize OSVersion=_OSVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000002e3770
- (_Bool)wantsHTTPGet;	// IMP=0x00100000002e3750
- (id)additionalQueryStringParameters;	// IMP=0x00100000002e3540
- (id)additionalMessageHeaders;	// IMP=0x00100000002e32d0
- (id)bagKey;	// IMP=0x00100000002e32b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002e2ff0

@end

