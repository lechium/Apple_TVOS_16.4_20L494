//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKBuildingGroup
{
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> _strokeMeshInfo;	// 2664 = 0xa68
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfoForPointyRoofs;	// 2856 = 0xb28
    struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> _strokeMeshes;	// 3048 = 0xbe8
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> _fillMeshesForPointyRoofs;	// 3072 = 0xc00
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;	// 3096 = 0xc18
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;	// 3104 = 0xc20
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;	// 3112 = 0xc28
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;	// 3120 = 0xc30
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionFillCullingGroups;	// 3128 = 0xc38
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionStrokeCullingGroups;	// 3512 = 0xdb8
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _fillCullingGroupsForPointyRoofs;	// 3896 = 0xf38
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofFillCullingGroups;	// 4280 = 0x10b8
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofStrokeCullingGroups;	// 4664 = 0x1238
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _styleQueries;	// 5048 = 0x13b8
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _flatRoofStyleQueries;	// 5072 = 0x13d0
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedStyleQueries;	// 5096 = 0x13e8
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedFlatRoofStyleQueries;	// 5120 = 0x1400
}

- (id).cxx_construct;	// IMP=0x0000000000676857
- (void).cxx_destruct;	// IMP=0x0000000000676677
- (void)updateWithStyleManager:(const void *)arg1;	// IMP=0x0000000000676109
- (_Bool)addPointyRoofForBuilding:(void *)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;	// IMP=0x000000000067500d
- (_Bool)canConstructPointyRoofForPolygon:(void *)arg1 building:(void *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;	// IMP=0x0000000000674f30
- (void)addExtrusionForBuilding:(void *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;	// IMP=0x0000000000673928
- (void)addBuilding:(void *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(void *)arg5 prepareExtrusion:(_Bool)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;	// IMP=0x0000000000672e32
- (void)didFinishAddingData;	// IMP=0x0000000000672c2d
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;	// IMP=0x00000000006726b7
- (void)prepareForBuilding:(void *)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;	// IMP=0x00000000006710d1
- (const void *)commitRangesToPointyRoofStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x000000000067100b
- (const void *)commitRangesToPointyRoofFillRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x0000000000670f45
- (const void *)commitRangesToPointyRoofTopRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x0000000000670e7f
- (const void *)commitRangesToExtrusionStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x0000000000670db9
- (const void *)commitRangesToExtrusionFillRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x0000000000670cf3
- (void *)styleQueriesForPointyRoofs:(_Bool)arg1 selected:(_Bool)arg2;	// IMP=0x0000000000670cbb
- (unsigned char)maxAttributeSetsPerGroup;	// IMP=0x0000000000670cb0
- (const void *)pointyRoofStrokeMeshVendor;	// IMP=0x0000000000670c9f
- (const void *)pointyRoofFillMeshVendor;	// IMP=0x0000000000670c8e
- (void *)fillMeshesForPointyRoofs;	// IMP=0x0000000000670c7e
- (const void *)extrusionStrokeMeshVendor;	// IMP=0x0000000000670c6d
- (const void *)extrusionFillMeshVendor;	// IMP=0x0000000000670c5c
- (void *)strokeMeshes;	// IMP=0x0000000000670c4c
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4;	// IMP=0x0000000000670222

@end

