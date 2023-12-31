//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MimeEnrichedReader)
+ (id)mf_stringFromMimeEnrichedString:(id)arg1 asHTML:(_Bool)arg2;	// IMP=0x008000000000d1c1
+ (id)mf_stringFromMimeRichTextString:(id)arg1 asHTML:(_Bool)arg2;	// IMP=0x008000000000d145
+ (id)mf_stringForMimeTypeFromFileName:(id)arg1;	// IMP=0x008000000003755e
+ (id)mf_stringWithAttachmentCharacter;	// IMP=0x0080000000036e4f
+ (id)mf_stringRepresentationForBytes:(long long)arg1;	// IMP=0x0080000000036ce8
+ (id)mf_messageIDStringWithDomainHint:(id)arg1;	// IMP=0x0080000000036781
+ (id)mf_UUID;	// IMP=0x008000000003674f
- (unsigned long long)mf_nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;	// IMP=0x001000000000d338
- (unsigned long long)mf_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;	// IMP=0x001000000000d23d
- (id)mf_convertFromFlowedText:(unsigned int)arg1 visuallyEmpty:(_Bool *)arg2;	// IMP=0x001000000000d453
- (id)mf_stringByTrimmingWhitespaceAndNewlineCharacters;	// IMP=0x001000000003760b
- (_Bool)mf_containsSubstring:(id)arg1;	// IMP=0x00100000000375f7
- (_Bool)mf_containsSubstring:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000375d4
- (_Bool)mf_caseInsensitiveIsEqualToString:(id)arg1;	// IMP=0x00100000000375b6
- (id)mf_stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x00100000000374f4
- (id)mf_stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x0010000000037472
- (id)mf_stringByEscapingHTMLCodes;	// IMP=0x0010000000037278
- (id)mf_stringByEscapingForXML;	// IMP=0x001000000003712d
- (id)mf_uniqueFilenameWithRespectToFilenames:(id)arg1;	// IMP=0x0010000000036e9c
- (id)mf_stringWithNoExtraSpaces;	// IMP=0x0010000000036cf7
- (id)mf_fileSystemString;	// IMP=0x0010000000036c2b
- (unsigned int)mf_subjectPrefixLength;	// IMP=0x0010000000036a84
- (id)mf_stringByLocalizingReOrFwdPrefix;	// IMP=0x0010000000036891
- (_Bool)mf_isSubdirectoryOfPath:(id)arg1;	// IMP=0x00100000000378a7
- (_Bool)mf_makeDirectoryWithMode:(int)arg1;	// IMP=0x0010000000037860
- (id)mf_stringByAbbreviatingSharedResourcesDirectoryWithTildeInPath;	// IMP=0x0010000000037c83
- (id)mf_stringByExpandingTildeWithSharedResourcesDirectoryInPath;	// IMP=0x0010000000037b46
- (id)mf_canonicalizedAbsolutePath;	// IMP=0x0010000000037abb
- (id)mf_betterStringByResolvingSymlinksInPath;	// IMP=0x0010000000037a03
- (id)mf_stringByReallyAbbreviatingSharedResourcesDirectoryWithTildeInPath;	// IMP=0x0010000000037900
- (id)mf_stringForQuotingWithCharacter:(BOOL)arg1;	// IMP=0x00100000000a8601
@end

