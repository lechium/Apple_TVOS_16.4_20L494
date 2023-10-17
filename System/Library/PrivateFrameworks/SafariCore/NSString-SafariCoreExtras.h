//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSData;

@interface NSString (SafariCoreExtras)
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x002000000003321d
+ (id)safari_stringAsHexWithData:(id)arg1;	// IMP=0x002000000003318a
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000032687
- (unsigned long long)safari_lengthOfLongestCommonPrefixWithString:(id)arg1;	// IMP=0x00100000000365d2
@property(readonly, nonatomic) _Bool safari_containsCJKCharacters;
@property(readonly, copy, nonatomic) NSString *safari_urlStringSuppressingHTTPFamilySchemeAndWWWSubdomain;
@property(readonly, copy, nonatomic) NSString *safari_urlStringForCompletionDeduplication;
@property(readonly, nonatomic) _Bool safari_allowsLooserMatchingInSearch;
@property(readonly, nonatomic) _Bool safari_isPrefixOfWwwDot;
- (id)safari_bestURLForUserTypedString;	// IMP=0x001000000003637a
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForUserTypedStringWhenAddingPasswordInPasswordManager;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForPasswordManager;
- (id)safari_bundleIdentifierFromApplicationIdentifier:(id *)arg1;	// IMP=0x0010000000036040
- (unsigned long long)safari_numberOfComposedCharacters;	// IMP=0x0010000000035f43
- (_Bool)safari_looksLikeWillRedirectToURLStringAfterLogin:(id)arg1;	// IMP=0x0010000000035ae7
@property(readonly, copy, nonatomic) NSString *safari_suggestedFilenameFromTitleString;
@property(readonly, copy, nonatomic) NSString *safari_monogramString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_possibleTopLevelDomainCorrectionForUserTypedString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwAndWildcardDotPrefixes;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwDotPrefix;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;	// IMP=0x0010000000034e91
@property(readonly, copy, nonatomic) NSString *safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;	// IMP=0x0010000000034c9d
@property(readonly, copy, nonatomic) NSString *safari_stringByRedactingBookmarkDAVServerID;
@property(readonly, nonatomic) _Bool safari_looksLikeEmailAddress;
@property(readonly, nonatomic) _Bool safari_looksLikeIPAddress;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;	// IMP=0x00100000000349c6
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;	// IMP=0x00100000000348e4
- (_Bool)safari_containsAllCharactersInString:(id)arg1;	// IMP=0x00100000000347df
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;	// IMP=0x001000000003472f
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;	// IMP=0x0010000000034710
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property(readonly, copy, nonatomic) NSString *safari_stringByNormalizingVersionString;
@property(readonly, copy, nonatomic) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
@property(readonly, nonatomic) _Bool safari_containsPeriodOrHomoglyphForPeriod;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x00100000000342a0
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x0010000000034277
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;	// IMP=0x00100000000340d4
- (_Bool)_safari_hasLocalizedPrefix:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0010000000033ff2
- (_Bool)safari_hasLocalizedCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x0010000000033fda
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;	// IMP=0x0010000000033fc2
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;	// IMP=0x0010000000033f54
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x0010000000033ee6
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;	// IMP=0x0010000000033e82
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x0010000000033e1e
- (_Bool)safari_isHostOrSubdomainOfHost:(id)arg1;	// IMP=0x0010000000033d75
- (id)safari_substringFromPrefix:(id)arg1;	// IMP=0x0010000000033cd1
- (_Bool)safari_hasPrefix:(id)arg1;	// IMP=0x0010000000033c76
@property(readonly, copy, nonatomic) NSString *safari_separateResourceForkPath;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedSiteNameForCredentialLookup;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;	// IMP=0x00100000000332c8
@property(readonly, nonatomic) NSData *safari_base64DecodedData;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHost;
@property(readonly, copy, nonatomic) NSString *safari_filenameByFixingIllegalCharacters;
@property(readonly, nonatomic) _Bool safari_containsInteriorWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_stringByTrimmingWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_effectiveTopLevelDomainForHost;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x0010000000032908
@end
