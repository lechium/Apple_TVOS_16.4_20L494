//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSettingsLicenseUtilities : NSObject
{
}

+ (id)acknowledgementsPath;	// IMP=0x0040000000089e47
+ (id)legalSafetyText;	// IMP=0x0010000000089de4
+ (id)iTunesTermsText;	// IMP=0x0010000000089d75
+ (id)iCloudTermsText;	// IMP=0x0010000000089d3a
+ (id)gameCenterTermsText;	// IMP=0x0010000000089cff
+ (id)warrantyText;	// IMP=0x0010000000089cc4
+ (id)softwareLicenseText;	// IMP=0x0010000000089c89
+ (void)initialize;	// IMP=0x0010000000089c1b
+ (void)_downloadTerms;	// IMP=0x0010000000089a2a
+ (void)_getBuiltinTerms;	// IMP=0x00100000000898b2
+ (void)_decodeTermsData:(id)arg1;	// IMP=0x0010000000089634
+ (id)_termsRequest;	// IMP=0x0010000000089367

@end

