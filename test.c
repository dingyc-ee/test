apt-get update
    在修改/etc/apt/sources.list或/etc/apt/preferences之后运行该命令
    此外，您需要定期运行这一命令以确保您的软件包列表是最新的
apt-get install packagename
    安装一个新软件包
apt-get remove packagename
    卸载一个已安装的软件包（保留配置文档）
apt-get remove --purge packagename
    卸载一个已安装的软件包（删除配置文档）
apt-get autoremove packagename
    删除包及其依赖的软件包
apt-get autoremove --purge packagname
    删除包及其依赖的软件包 + 配置文件，比上面的要删除的彻底一点
dpkg --force-all --purge packagename
    有些软件很难卸载，而且还阻止了别的软件的应用，就能够用这个，但是有点冒险
apt-get autoclean
    apt会把已装或已卸的软件都备份在硬盘上，假如需要空间，这个命令删除您已卸载掉的软件的备份
apt-get clean
    这个命令会把安装的软件的备份也删除，但是这样不会影响软件的使用
apt-get upgrade
    可以使用这条命令更新软件包选项很有用
apt-get dist-upgrade
    将系统升级到新版本