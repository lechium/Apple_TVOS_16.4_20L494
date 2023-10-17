//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class NSString, UIMenu;

@protocol AVUnifiedPlayerContextMenuConduit <NSObject>
@property(nonatomic) long long bestAvailableAudioFormat;
@property(nonatomic) _Bool prefersExpandedDisplaySize;
@property(readonly, nonatomic) NSString *menuIdentifier;
- (void)updateMenu:(UIMenu *)arg1;
@end
