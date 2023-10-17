//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class AVPlayerItem, AVPlayerViewController;

@protocol AVScanningDelegate <NSObject>

@optional
- (_Bool)playerViewController:(AVPlayerViewController *)arg1 shouldHandleScanningForPlayerItem:(AVPlayerItem *)arg2;
- (void)stopScanningPlayerViewController:(AVPlayerViewController *)arg1;
- (long long)playerViewController:(AVPlayerViewController *)arg1 scanFromElapsedTime:(CDStruct_198678f7)arg2 rate:(double)arg3 imageBlock:(void (^)(struct, UIImage *))arg4;
@end
