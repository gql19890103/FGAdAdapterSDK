//
//  FGRewardAdBZAdapter.h
//  FGAdAdapterSDK
//
//  Created by Amy on 2025/8/8.
//

#import <Foundation/Foundation.h>
#import <AMPSAdSDK/AMPSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGRewardAdBZAdapter : NSObject <AMPSCustomRewardedVideoProtocol>

@property (nonatomic, weak, nullable) id <AMPSCustomRewardedVideoAdapterDelegate> customDelegate;

@property (nonatomic, weak, nullable) id<AMPSCustomBiddingDelegate> bidDelegate;

@property (nonatomic, assign) BOOL isLoadAdSuccess;

@property (nonatomic, strong) id adapterModel;

@property (nonatomic, copy) NSString *appId;

@property (nonatomic, strong) AMPSAdSDKConfiguration *sdkConfiguration;

@end

NS_ASSUME_NONNULL_END
