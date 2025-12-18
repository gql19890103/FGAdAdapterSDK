//
//  FGFeedAdBZAdapter.h
//  FGAdAdapterSDK
//
//  Created by Amy on 2025/8/8.
//

#import <Foundation/Foundation.h>
#import <AMPSAdSDK/AMPSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGFeedAdBZAdapter : NSObject <AMPSCustomNativeManagerProtocol>

@property (nonatomic, strong) NSArray <id<AMPSCustomNativeViewProtocol>> *viewsArray;
@property (nonatomic, weak, nullable) id <AMPSCustomNativeDelegate> customDelegate;
@property (nonatomic, weak, nullable) id<AMPSCustomBiddingDelegate> bidDelegate;

@property (nonatomic, assign) BOOL isLoadAdSuccess;

@property (nonatomic, strong) id adapterModel;

@property (nonatomic, copy) NSString *appId;

@property (nonatomic, strong) AMPSAdSDKConfiguration *sdkConfiguration;

@end

NS_ASSUME_NONNULL_END
