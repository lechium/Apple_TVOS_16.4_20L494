//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VSSpeechService)
+ (_Bool)vs_isCJKCharacter:(unsigned short)arg1;	// IMP=0x008000000001de86
+ (unsigned long long)_vs_countPhoneticSyllables_xsampa:(id)arg1;	// IMP=0x008000000001d54c
+ (unsigned long long)_vs_countPhoneticSyllables_lhp:(id)arg1;	// IMP=0x008000000001d4c1
+ (id)vs_markerStringForContext:(id)arg1;	// IMP=0x008000000001cc7c
+ (id)vs_stringFrom4CC:(int)arg1;	// IMP=0x008000000002ad0f
- (id)vs_convertToSSML;	// IMP=0x001000000001e029
- (_Bool)vs_hasCJKCharacter;	// IMP=0x001000000001dfa0
- (id)vs_removeSpeechTags;	// IMP=0x001000000001dd81
- (id)vs_removePhonetics;	// IMP=0x001000000001dbff
- (unsigned long long)vs_countPhoneticSyllables;	// IMP=0x001000000001d5d7
- (double)vs_measurePauses;	// IMP=0x001000000001cf44
- (id)vs_insertContextInfo:(id)arg1;	// IMP=0x001000000001cede
- (id)vs_substituteAudioWithLocalPath;	// IMP=0x001000000001c8c1
- (id)vs_textifyEmojiWithLanguage:(id)arg1;	// IMP=0x001000000001c79e
- (id)preinstalledAudioHashForLanguage:(id)arg1 name:(id)arg2;	// IMP=0x001000000002f543
- (id)sha256hex;	// IMP=0x001000000002f476
@end

