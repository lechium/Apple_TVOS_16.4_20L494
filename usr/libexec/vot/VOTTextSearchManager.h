//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString, NSString, VOTBrailleManager;

@interface VOTTextSearchManager : NSObject
{
    NSMutableArray *_history;	// 8 = 0x8
    NSMutableString *_buffer;	// 16 = 0x10
    long long _bufferIndex;	// 24 = 0x18
    long long _historyIndex;	// 32 = 0x20
    _Bool _textSearchModeIsOn;	// 40 = 0x28
    VOTBrailleManager *_brailleManager;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0040000000118c0f
+ (void)initialize;	// IMP=0x0010000000118bda
- (void).cxx_destruct;	// IMP=0x0020000000119d1a
@property(readonly, nonatomic) _Bool textSearchModeIsOn; // @synthesize textSearchModeIsOn=_textSearchModeIsOn;
@property(retain, nonatomic) VOTBrailleManager *brailleManager; // @synthesize brailleManager=_brailleManager;
- (void)_updateBrailleWithBuffer;	// IMP=0x0010000000119ae6
- (void)handleReplaceRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(long long)arg3;	// IMP=0x0010000000119a26
- (void)handleTextSearchEvent:(id)arg1;	// IMP=0x0010000000119936
- (void)_handleLetter:(id)arg1;	// IMP=0x00100000001195c7
- (void)_handleDelete:(id)arg1;	// IMP=0x0010000000119305
- (void)_handleArrowKey:(id)arg1;	// IMP=0x001000000011927e
- (void)_handleUpDownMovement:(id)arg1;	// IMP=0x0010000000119136
- (void)_handleRightLeftMovement:(id)arg1;	// IMP=0x0010000000118edf
@property(copy, nonatomic) NSString *currentSearchValue; // @dynamic currentSearchValue;
- (void)endTextSearchSession;	// IMP=0x0010000000118e2e
- (void)beginNewTextSearchSession;	// IMP=0x0010000000118de9
- (void)_syncSearchBufferHistory;	// IMP=0x0010000000118d4b
- (id)init;	// IMP=0x0010000000118c20

@end

