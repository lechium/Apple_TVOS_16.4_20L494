//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, NSArray;

@protocol AVPlayerItemLegibleOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg1 didOutputAttributedStrings:(NSArray *)arg2 nativeSampleBuffers:(NSArray *)arg3 forItemTime:(CDStruct_198678f7)arg4;
@end

