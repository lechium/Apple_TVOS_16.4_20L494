//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityTextMarker : NSObject
{
    void *_cache;	// 8 = 0x8
    struct TextMarkerData _textMarkerData;	// 16 = 0x10
}

+ (id)startOrEndTextMarkerForRange:(const void *)arg1 isStart:(_Bool)arg2 cache:(void *)arg3;	// IMP=0x00600000002991a0
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg1 cache:(void *)arg2;	// IMP=0x00600000002990a0
+ (id)textMarkerWithVisiblePosition:(void *)arg1 cache:(void *)arg2;	// IMP=0x0060000000299030
- (id).cxx_construct;	// IMP=0x00000000002993c0
- (id)description;	// IMP=0x0000000000299380
- (void *)accessibilityObject;	// IMP=0x00000000002992c0
- (_Bool)isIgnored;	// IMP=0x00000000002992b0
- (struct CharacterOffset)characterOffset;	// IMP=0x0000000000299280
- (struct VisiblePosition)visiblePosition;	// IMP=0x0000000000299250
- (id)dataRepresentation;	// IMP=0x0000000000299220
- (id)initWithData:(id)arg1 accessibilityObject:(id)arg2;	// IMP=0x0000000000298fe0
- (id)initWithData:(id)arg1 cache:(void *)arg2;	// IMP=0x0000000000298f70
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(void *)arg2;	// IMP=0x0000000000298f10

@end

