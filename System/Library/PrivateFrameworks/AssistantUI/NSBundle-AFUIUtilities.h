//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (AFUIUtilities)
+ (id)afui_assistantUIFrameworkBundle;	// IMP=0x005000000002230f
- (id)_assistantUIStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizationLanguageCode:(id)arg4;	// IMP=0x00100000000229ad
- (id)_assistantUIlocalizationArrayForLanguageCode:(id)arg1;	// IMP=0x0010000000022937
- (id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;	// IMP=0x0010000000022614
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x001000000002256b
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;	// IMP=0x0010000000022554
- (id)assistantUILocalizedStringFromSystemLanguageForKey:(id)arg1 table:(id)arg2;	// IMP=0x001000000002248b
- (id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2;	// IMP=0x00100000000223c4
- (id)assistantUILocale;	// IMP=0x00100000000223ba
- (_Bool)assistantLanguageIsRTL;	// IMP=0x001000000002232f
@end
