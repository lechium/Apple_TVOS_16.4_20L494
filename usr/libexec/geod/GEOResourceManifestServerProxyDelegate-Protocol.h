//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOActiveTileGroup;
@protocol GEOResourceManifestServerProxy;

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
- (void)serverProxyNeedsWiFiResourceActivity:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 finishedCallback:(void (^)(void))arg3;
- (void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didLoadActiveTileGroup:(GEOActiveTileGroup *)arg2;
- (oneway void)serverProxyDidStopLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
@end

