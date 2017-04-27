ifconfig enxc8a030af9fee 192.168.7.1
iptables --table nat --append POSTROUTING --out-interface wlp3s0 -j MASQUERADE
iptables --append FORWARD --in-interface enx8030dc5a17fc -j ACCEPT
echo 1 > /proc/sys/net/ipv4/ip_forward

