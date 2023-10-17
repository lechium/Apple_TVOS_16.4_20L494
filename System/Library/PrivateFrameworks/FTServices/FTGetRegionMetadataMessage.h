//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage
{
    NSString *_language;	// 232 = 0xe8
    NSDictionary *_responseRegionInformation;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000002a0cc
@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x000000000002a025
- (id)messageBody;	// IMP=0x0000000000029fa7
- (id)requiredKeys;	// IMP=0x0000000000029f6d
- (id)bagKey;	// IMP=0x0000000000029f60
- (_Bool)wantsHTTPGet;	// IMP=0x0000000000029f58
- (long long)responseCommand;	// IMP=0x0000000000029f4d
- (long long)command;	// IMP=0x0000000000029f42
- (_Bool)wantsBinaryPush;	// IMP=0x0000000000029f3a
- (_Bool)wantsCompressedBody;	// IMP=0x0000000000029f32
- (_Bool)wantsHTTPHeaders;	// IMP=0x0000000000029f2a
- (_Bool)wantsBagKey;	// IMP=0x0000000000029f22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029e71
- (id)init;	// IMP=0x0000000000029da9

@end

