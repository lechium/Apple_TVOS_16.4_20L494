//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicKitInternal/NSObject-Protocol.h>

@class NSString;
@protocol MusicKit_SoftLinking_MPAVRoute;

@protocol MusicKit_SoftLinking_MPCPlayerPath <NSObject>
@property(readonly, nonatomic) id <MusicKit_SoftLinking_MPAVRoute> musicKit_playerPath_route;
@property(readonly, nonatomic, getter=musicKit_playerPath_isInProcess) _Bool musicKit_playerPath_inProcess;
@property(readonly, copy, nonatomic) NSString *musicKit_playerPath_playerID;
@property(readonly, copy, nonatomic) NSString *musicKit_playerPath_bundleID;
@end

