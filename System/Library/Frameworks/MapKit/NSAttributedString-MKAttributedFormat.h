//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MKAttributedFormat)
+ (void)_handleFormattingError:(id)arg1 forString:(id)arg2;	// IMP=0x00500000001cf9e3
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;	// IMP=0x00500000001cf7ef
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 defaultReplacementAttributes:(id)arg3 startTokenDelimiter:(id)arg4 endTokenDelimiter:(id)arg5 error:(id *)arg6;	// IMP=0x00500000001cf0aa
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x00500000001cefae
+ (id)_mapkit_attributedLiveTransitStringFromAttributedDepartureString:(id)arg1 liveStatus:(long long)arg2 darkMode:(_Bool)arg3 symbolOverrideColor:(id)arg4;	// IMP=0x00500000001d8d64
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 textAttributes:(id)arg3 darkMode:(_Bool)arg4 symbolOverrideColor:(id)arg5;	// IMP=0x00500000001d8c6a
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 darkMode:(_Bool)arg3;	// IMP=0x00500000001d8c41
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3 options:(CDStruct_ef0b40be)arg4;	// IMP=0x00500000001d8b1e
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3;	// IMP=0x00500000001d8a4c
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x00500000001d8a37
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;	// IMP=0x00100000001cf93d
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;	// IMP=0x00100000001cf897
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 startTokenDelimiter:(id)arg3 endTokenDelimiter:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001cf1b0
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001cf07d
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001cf066
@end
