//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequest.h"

@class GEOMapAccess;

__attribute__((visibility("hidden")))
@interface GEOMapTileFinder : GEOMapRequest
{
    unsigned long long _zoomLevel;	// 40 = 0x28
    int _tileSize;	// 48 = 0x30
    int _tileScale;	// 52 = 0x34
    int _tileStyle;	// 56 = 0x38
    CDStruct_2c43369c _center;	// 64 = 0x40
    double _radius;	// 80 = 0x50
    CDUnknownBlockType _tileHandler;	// 88 = 0x58
    _Bool _isCanceling;	// 96 = 0x60
}

+ (id)buildingsTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0060000000d70b46
+ (id)transitGeometryTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0060000000d70a99
+ (id)detailedTransitTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0060000000d709ec
+ (id)realisticTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0060000000d70906
- (void).cxx_destruct;	// IMP=0x0000000000d71c4f
@property(readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property(readonly, nonatomic) int tileScale; // @synthesize tileScale=_tileScale;
@property(readonly, nonatomic) int tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(copy, nonatomic) CDUnknownBlockType tileHandler; // @synthesize tileHandler=_tileHandler;
- (struct _GEOTileKey)_adjacentTileKey:(const struct _GEOTileKey *)arg1 dirX:(int)arg2 dirY:(int)arg3;	// IMP=0x0000000000d71ab5
- (void)findTiles:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d71aa1
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const void *)arg2 tileHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d718ca
- (void)findTiles:(CDUnknownBlockType)arg1 excludingKey:(const struct _GEOTileKey *)arg2;	// IMP=0x0000000000d71379
- (void)_fetchDataForKeys:(const void *)arg1;	// IMP=0x0000000000d70d79
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;	// IMP=0x0000000000d70bf3
- (void)dealloc;	// IMP=0x0000000000d708d7
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(CDStruct_c3b9c2ee)arg6 radius:(double)arg7;	// IMP=0x0000000000d70826

@end

