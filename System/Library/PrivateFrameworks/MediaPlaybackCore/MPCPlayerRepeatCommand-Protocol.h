//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerRepeatCommand <MPCPlayerCommand>
@property(readonly, nonatomic) NSArray *supportedRepeatTypes;
- (MPCPlayerCommandRequest *)advance;
- (MPCPlayerCommandRequest *)setRepeatType:(long long)arg1;
@end
