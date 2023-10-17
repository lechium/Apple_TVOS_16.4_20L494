//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHChatBubbleRecognitionResult
{
    double _stemWidth;	// 64 = 0x40
    struct CGPoint _stemLocation;	// 72 = 0x48
}

@property(readonly) double stemWidth; // @synthesize stemWidth=_stemWidth;
@property(readonly) struct CGPoint stemLocation; // @synthesize stemLocation=_stemLocation;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5 stemLocation:(struct CGPoint)arg6 stemWidth:(double)arg7;	// IMP=0x00000000000afda0

@end

