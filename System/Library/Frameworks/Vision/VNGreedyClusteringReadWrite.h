//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadWrite
{
    struct shared_ptr<vision::mod::FaceClustering> m_ClusteringImpl;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x0000000000022cf6
- (void).cxx_destruct;	// IMP=0x0000000000022caf
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000217ac
- (long long)_cancellableUpdate:(void *)arg1 facesToMove:(void *)arg2 requestRevision:(unsigned long long)arg3;	// IMP=0x00000000000216ce
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002100a

@end

